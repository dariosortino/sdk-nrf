/*
 * Copyright (c) 2023 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */
#include <stdint.h>
#include <strings.h>

const uint8_t cert_coap_root_ca_pem[] = {
	0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x20, 0x43, 0x45, 0x52, 0x54,
	0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0a, 0x4d, 0x49,
	0x49, 0x42, 0x6a, 0x7a, 0x43, 0x43, 0x41, 0x54, 0x61, 0x67, 0x41, 0x77, 0x49, 0x42, 0x41,
	0x67, 0x49, 0x55, 0x4f, 0x45, 0x61, 0x6b, 0x47, 0x55, 0x53, 0x2f, 0x37, 0x42, 0x66, 0x53,
	0x6c, 0x70, 0x72, 0x6b, 0x6c, 0x79, 0x37, 0x55, 0x4b, 0x34, 0x33, 0x5a, 0x41, 0x77, 0x6f,
	0x77, 0x43, 0x67, 0x59, 0x49, 0x4b, 0x6f, 0x5a, 0x49, 0x7a, 0x6a, 0x30, 0x45, 0x41, 0x77,
	0x49, 0x77, 0x0a, 0x46, 0x44, 0x45, 0x53, 0x4d, 0x42, 0x41, 0x47, 0x41, 0x31, 0x55, 0x45,
	0x41, 0x77, 0x77, 0x4a, 0x62, 0x6c, 0x4a, 0x47, 0x49, 0x45, 0x4e, 0x73, 0x62, 0x33, 0x56,
	0x6b, 0x4d, 0x42, 0x34, 0x58, 0x44, 0x54, 0x49, 0x7a, 0x4d, 0x44, 0x55, 0x79, 0x4e, 0x44,
	0x45, 0x79, 0x4d, 0x7a, 0x55, 0x7a, 0x4d, 0x6c, 0x6f, 0x58, 0x44, 0x54, 0x51, 0x34, 0x4d,
	0x54, 0x49, 0x7a, 0x4d, 0x44, 0x45, 0x79, 0x0a, 0x4d, 0x7a, 0x55, 0x7a, 0x4d, 0x6c, 0x6f,
	0x77, 0x46, 0x44, 0x45, 0x53, 0x4d, 0x42, 0x41, 0x47, 0x41, 0x31, 0x55, 0x45, 0x41, 0x77,
	0x77, 0x4a, 0x62, 0x6c, 0x4a, 0x47, 0x49, 0x45, 0x4e, 0x73, 0x62, 0x33, 0x56, 0x6b, 0x4d,
	0x46, 0x6b, 0x77, 0x45, 0x77, 0x59, 0x48, 0x4b, 0x6f, 0x5a, 0x49, 0x7a, 0x6a, 0x30, 0x43,
	0x41, 0x51, 0x59, 0x49, 0x4b, 0x6f, 0x5a, 0x49, 0x7a, 0x6a, 0x30, 0x44, 0x0a, 0x41, 0x51,
	0x63, 0x44, 0x51, 0x67, 0x41, 0x45, 0x50, 0x56, 0x6d, 0x4a, 0x58, 0x54, 0x34, 0x54, 0x41,
	0x31, 0x6c, 0x6a, 0x4d, 0x63, 0x62, 0x50, 0x48, 0x30, 0x68, 0x78, 0x6c, 0x7a, 0x4d, 0x44,
	0x69, 0x50, 0x58, 0x37, 0x33, 0x46, 0x48, 0x73, 0x64, 0x47, 0x4d, 0x2f, 0x36, 0x6d, 0x71,
	0x41, 0x77, 0x71, 0x39, 0x6d, 0x32, 0x4e, 0x75, 0x6e, 0x72, 0x35, 0x2f, 0x67, 0x54, 0x51,
	0x51, 0x46, 0x0a, 0x4d, 0x42, 0x55, 0x5a, 0x4a, 0x61, 0x51, 0x2f, 0x72, 0x55, 0x79, 0x63,
	0x4c, 0x6d, 0x72, 0x54, 0x38, 0x69, 0x2b, 0x4e, 0x5a, 0x30, 0x66, 0x2f, 0x4f, 0x7a, 0x6f,
	0x46, 0x73, 0x4b, 0x4e, 0x6d, 0x4d, 0x47, 0x51, 0x77, 0x48, 0x51, 0x59, 0x44, 0x56, 0x52,
	0x30, 0x4f, 0x42, 0x42, 0x59, 0x45, 0x46, 0x47, 0x75, 0x73, 0x43, 0x37, 0x51, 0x61, 0x56,
	0x38, 0x32, 0x35, 0x76, 0x30, 0x43, 0x69, 0x0a, 0x71, 0x45, 0x76, 0x32, 0x6d, 0x31, 0x48,
	0x68, 0x69, 0x53, 0x63, 0x53, 0x4d, 0x42, 0x38, 0x47, 0x41, 0x31, 0x55, 0x64, 0x49, 0x77,
	0x51, 0x59, 0x4d, 0x42, 0x61, 0x41, 0x46, 0x47, 0x75, 0x73, 0x43, 0x37, 0x51, 0x61, 0x56,
	0x38, 0x32, 0x35, 0x76, 0x30, 0x43, 0x69, 0x71, 0x45, 0x76, 0x32, 0x6d, 0x31, 0x48, 0x68,
	0x69, 0x53, 0x63, 0x53, 0x4d, 0x42, 0x49, 0x47, 0x41, 0x31, 0x55, 0x64, 0x0a, 0x45, 0x77,
	0x45, 0x42, 0x2f, 0x77, 0x51, 0x49, 0x4d, 0x41, 0x59, 0x42, 0x41, 0x66, 0x38, 0x43, 0x41,
	0x51, 0x41, 0x77, 0x44, 0x67, 0x59, 0x44, 0x56, 0x52, 0x30, 0x50, 0x41, 0x51, 0x48, 0x2f,
	0x42, 0x41, 0x51, 0x44, 0x41, 0x67, 0x47, 0x47, 0x4d, 0x41, 0x6f, 0x47, 0x43, 0x43, 0x71,
	0x47, 0x53, 0x4d, 0x34, 0x39, 0x42, 0x41, 0x4d, 0x43, 0x41, 0x30, 0x63, 0x41, 0x4d, 0x45,
	0x51, 0x43, 0x0a, 0x49, 0x48, 0x2f, 0x43, 0x33, 0x79, 0x66, 0x35, 0x61, 0x4e, 0x46, 0x53,
	0x46, 0x6c, 0x6d, 0x34, 0x34, 0x43, 0x6f, 0x50, 0x35, 0x50, 0x38, 0x4c, 0x39, 0x61, 0x57,
	0x2f, 0x35, 0x77, 0x6f, 0x4e, 0x72, 0x7a, 0x4e, 0x2f, 0x6b, 0x55, 0x35, 0x49, 0x2b, 0x48,
	0x33, 0x38, 0x41, 0x69, 0x41, 0x77, 0x69, 0x48, 0x59, 0x6c, 0x50, 0x63, 0x6c, 0x70, 0x32,
	0x35, 0x4c, 0x67, 0x59, 0x38, 0x65, 0x32, 0x0a, 0x6e, 0x37, 0x65, 0x32, 0x57, 0x2f, 0x48,
	0x31, 0x4c, 0x58, 0x4a, 0x37, 0x53, 0x33, 0x45, 0x4e, 0x44, 0x42, 0x77, 0x4b, 0x55, 0x46,
	0x34, 0x71, 0x79, 0x77, 0x3d, 0x3d, 0x0a, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x45, 0x4e, 0x44,
	0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d,
	0x2d, 0x2d, 0x0a};

const size_t cert_coap_root_ca_pem_size = sizeof(cert_coap_root_ca_pem);