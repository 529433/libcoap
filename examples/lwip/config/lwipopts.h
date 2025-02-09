/*
 * lwipopts.h -- LwIP example
 *
 * Copyright (C) 2013-2016 Christian Amsüss <chrysn@fsfe.org>
 * Copyright (C) 2018 John Shallow <supjps-libcoap@jpshallow.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * This file is part of the CoAP library libcoap. Please see README for terms
 * of use.
 */

#define NO_SYS                     1
#define LWIP_SOCKET                (NO_SYS==0)
#define LWIP_NETCONN               (NO_SYS==0)
#define LWIP_NETIF_API             (NO_SYS==0)

#define LWIP_IPV6                       1
#define LWIP_IPV6_REASS                 0

#ifndef LWIP_RAND
#define LWIP_RAND() ((u32_t)rand())
#endif

#ifndef netif_get_index
#define netif_get_index(netif)      ((u8_t)((netif)->num + 1))
#endif

#define MEMP_USE_CUSTOM_POOLS 1
#define MEM_SIZE (4 * 1024)

/* Set if space is to be reserved for a response PDU */
#define MEMP_STATS                      1

/*
 * Set to display (with LOG_DEBUG) custom pools information
 * (Needs MEMP_STATS set) when coap_free_context() is called.
 */
#define LWIP_STATS_DISPLAY              1
