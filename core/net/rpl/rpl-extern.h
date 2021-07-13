/*
 * Jun 2021: Trying to externilize variables to bypass compiler error
 * in iot-lab.
 * Need to externilize only specific needed variables.
 * Debugger failed when #include rpl-icmp6.c #include rpl-dag.c
 */
 
#ifndef RPL_EXTERN_H
#define RPL_EXTERN_H


/* George: Variables to monitor version number attack on the app layer.
 * If one of them is <>0 the controller will be notified
 */
uint8_t dio_bigger_than_dag;
uint8_t dio_smaller_than_dag;

/* George: If this turns true, all nodes will stop resetting trickle timer, 
 * because there is a version attack going on
 */
uint8_t ignore_version_number_incos;


#endif /* ICMP6_EXTERN_H */
