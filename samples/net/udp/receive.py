import socket
import time
import serial
import argparse



# Crea un parser di argomenti
parser = argparse.ArgumentParser()
parser.add_argument('--serial', help="Specifica la porta COM")
parser.add_argument('--devicesock', help="Specifica la porta associato ad un receiver", required=True)

args = parser.parse_args()
port = args.serial
socknum = int(args.devicesock)

if port:
    # Apre la porta seriale
    ser = serial.Serial(port, 9600)

# Crea la socket UDP
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Associa la socket alla porta 'socknum'
sock.bind(('', socknum))

# Imposta la socket in modalità non bloccante
sock.setblocking(False)

# Variabile per memorizzare il timestamp del secondo precedente
previous_time = time.time()

# Contatore per il numero di pacchetti ricevuti
packet_count = 0

# Variabile per memorizzare la dimensione totale dei pacchetti ricevuti
total_size = 0

# Variabile per memorizzare il tempo di inizio
previous_time = time.time()

while True:
    try:
        # Riceve un pacchetto UDP
        data, addr = sock.recvfrom(1024)

        # Calcola il tempo trascorso dall'inizio
        current_time = time.time()
        time_delta = current_time - previous_time

        # Incrementa il contatore dei pacchetti
        packet_count += 1

        # Aggiorna la dimensione totale dei pacchetti ricevuti
        total_size += len(data)

        # Se è trascorso un secondo
        if time_delta >= 1:
            # Stampa il numero di pacchetti ricevuti, la dimensione totale e il contenuto del pacchetto
            print(f"Data rate: {total_size / 1024:.2f} (kB/s) - {packet_count} packets - {addr}")
            # Resetta il contatore dei pacchetti
            packet_count = 0

            # Resetta la dimensione totale dei pacchetti ricevuti
            total_size = 0

            # Resetta il tempo di inizio
            previous_time = current_time

        # Invia il contenuto del pacchetto alla seriale
        if port:    
            ser.write(data)

    except socket.error:
        # Se non ci sono pacchetti da ricevere, passa al ciclo successivo
        pass

# Chiude la socket e la porta seriale
sock.close()
if port:
    ser.close()
