#ifndef _COLOR_FACT_
#define _COLOR_FACT_
#include "policy.h"

template<typename Checking_policy = std_exception_on_error>
class ColorFactory{
    public:
        Color returnColor(const std::string& color){
            if(color == "green" || color == "zielony"){
                return Checking_policy::perform();
            }else{
                return Checking_policy::perform();
            }
        }
};
#endif