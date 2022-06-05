#ifndef WRAPPER_H_
#define WRAPPER_H_

#ifdef __cplusplus
extern "C"
{
#endif

    void *call_loop_udpSend();
    void *call_loop_udpRecv();

    void call_loop_udpSend_start(void *);
    void call_loop_udpRecv_start(void *);
    
#ifdef __cplusplus
}
#endif

#endif