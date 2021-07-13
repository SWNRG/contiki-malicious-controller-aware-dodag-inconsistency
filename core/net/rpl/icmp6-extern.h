/*
 * Jun 2021: Trying to externilize variables to bypass compiler error
 * in iot-lab.
 * Need to externilize only specific needed variables.
 * Debugger failed when #include rpl-icmp6.c
 */
 
#ifndef ICMP6_EXTERN_H
#define ICMP6_EXTERN_H

#include "net/rpl/rpl-private.h"

/* George they will be sent to app layer for extra info to the sink */ 
rpl_parent_t *dao_preffered_parent;
uip_ipaddr_t *dao_preffered_parent_ip;
uip_ipaddr_t dao_prefix_own_ip;
uint8_t dao_parent_set; /* it does not seem to be used anywhere? */

#endif /* ICMP6_EXTERN_H */
