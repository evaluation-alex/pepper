#ifndef APPS_SFDL_HW_V_INP_GEN_HW_H_
#define APPS_SFDL_HW_V_INP_GEN_HW_H_

#include <libv/libv.h>
#include <common/utility.h>
#include <apps_sfdl_gen/ramget_fast_micro_v_inp_gen.h>
#include <apps_sfdl_gen/ramget_fast_micro_cons.h>
#pragma pack(push)
#pragma pack(1)

//using namespace ramget_fast_micro_cons;

/*
* Provides the ability for user-defined input creation
*/
class ramget_fast_microVerifierInpGenHw : public InputCreator {
  public:
    ramget_fast_microVerifierInpGenHw(Venezia* v);

    void create_input(mpq_t* input_q, int num_inputs);
  private:
    Venezia* v;
    ramget_fast_microVerifierInpGen compiler_implementation;

};
#pragma pack(pop)
#endif  // APPS_SFDL_HW_V_INP_GEN_HW_H_
