#ifndef _COMP_H_
#define _COMP_H_

#include <systemc>

SC_MODULE(Comp)
{public:
    /*-------------------------------------------------------------------------
    -- Ports
    -------------------------------------------------------------------------*/
    sc_in<sc_uint<32>> data1_i;
    sc_in<sc_uint<32>> data2_i; 
    sc_in<sc_uint<4>> func4_i; 
    //sc_in<sc_uint<3>> func3_i; 
    /*-------------------------------------------------------------------------
    -- Constructor
    -------------------------------------------------------------------------*/
    SC_CTOR(Comp);
  private:
    /*-------------------------------------------------------------------------
    -- Methods/Threads
    -------------------------------------------------------------------------*/
    void CompMethod(void);
};
#endif