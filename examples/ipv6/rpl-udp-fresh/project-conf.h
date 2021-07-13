#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_

/********* DODAG INCONSISTENCY MALICIOUS NODE ****************/

/* Print only the last part of the address (e.g. 02). Handy for debugging */
#ifndef printShortAddr
#define printShortAddr(addr) printf(" %02x ",((uint8_t *)addr)[15])
#endif
/* Printf full IPv6 address without DEBUG_FULL */
#define printLongAddr(addr) printf("[%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x]", ((uint8_t *)addr)[0], ((uint8_t *)addr)[1], ((uint8_t *)addr)[2], ((uint8_t *)addr)[3], ((uint8_t *)addr)[4], ((uint8_t *)addr)[5], ((uint8_t *)addr)[6], ((uint8_t *)addr)[7], ((uint8_t *)addr)[8], ((uint8_t *)addr)[9], ((uint8_t *)addr)[10], ((uint8_t *)addr)[11], ((uint8_t *)addr)[12], ((uint8_t *)addr)[13], ((uint8_t *)addr)[14], ((uint8_t *)addr)[15])

#ifndef WITH_NON_STORING
#define WITH_NON_STORING 0 /* Set this to run with non-storing mode */
#endif /* WITH_NON_STORING */

#define UIP_CONF_STATISTICS 1   // All icmp related stats (1=ON)

/* 2018-10-20 George: Control the printout of 
 * the route followed by the packet
 * along the way. Prints exist in file 
 * contiki/core/net/ipv6.c and in uip6.c
 */
#define PRINT_ROUTE_ON 0

/* if off, BLACKHOLE all UDP messages will be intercepted. Else randomly choose y/n */
#define GREY_SINK_HOLE_ATTACK 0
/* How much to lower the rank of the malicious node in rpl-icmp6.c */
#define MALICIOUS_LEVEL 0

/* 2018-10-20 George: Control the printing of 
 * accumulated ICMP messages in EVERY node
 */
#define PRINT_ICMP_ON 1
#define PRINT_UDP_ON 1

#undef NBR_TABLE_CONF_MAX_NEIGHBORS
#undef UIP_CONF_MAX_ROUTES

//#ifdef TEST_MORE_ROUTES
/* configure number of neighbors and routes */
#define NBR_TABLE_CONF_MAX_NEIGHBORS     10
#define UIP_CONF_MAX_ROUTES   30
//#else
/* configure number of neighbors and routes */
//#define NBR_TABLE_CONF_MAX_NEIGHBORS     10
//#define UIP_CONF_MAX_ROUTES   10
//#endif /* TEST_MORE_ROUTES */

//#undef NETSTACK_CONF_MAC
//#define NETSTACK_CONF_MAC     csma_driver

#undef NETSTACK_CONF_RDC
#define NETSTACK_CONF_RDC     nullrdc_driver
#undef NULLRDC_CONF_802154_AUTOACK
#define NULLRDC_CONF_802154_AUTOACK       1

/* Define as minutes */
#define RPL_CONF_DEFAULT_LIFETIME_UNIT   60

/* 10 minutes lifetime of routes */
#define RPL_CONF_DEFAULT_LIFETIME        10

#define RPL_CONF_DEFAULT_ROUTE_INFINITE_LIFETIME 1

#define UIP_CONF_STATISTICS 1   // Tryfon stats ON

#if WITH_NON_STORING
#undef RPL_NS_CONF_LINK_NUM
#define RPL_NS_CONF_LINK_NUM 40 /* Number of links maintained at the root. Can be set to 0 at non-root nodes. */
#undef UIP_CONF_MAX_ROUTES
#define UIP_CONF_MAX_ROUTES 0 /* No need for routes */
#undef RPL_CONF_MOP
#define RPL_CONF_MOP RPL_MOP_NON_STORING /* Mode of operation*/
#endif /* WITH_NON_STORING */

#endif
