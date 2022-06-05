#include "loop.h"
#include "wrapper.h"

#ifdef __cplusplus
extern "C"
{
#endif

    void *call_loop_udpSend()
    {
        LoopFunc loop_udpSend("udp_send", custom.dt, 3, boost::bind(&Custom::UDPSend, &custom));
        return;
    }
    void *call_loop_udpRecv()
    {
        LoopFunc loop_udpRecv("udp_recv", custom.dt, 3, boost::bind(&Custom::UDPRecv, &custom));
        return;
    }

    void call_loop_udpSend_start(void *)
    {
         return static_cast<LoopFunc *>(p)->Start();
        return;
    }
    void call_loop_udpRecv_start(void *)
    {
         return static_cast<LoopFunc *>(p)->Start();
        return;
    }

#ifdef __cplusplus
}
#endif
