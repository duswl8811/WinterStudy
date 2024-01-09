#pragma once
#include "Object.h"

class CBird :
    public CAnimal
{
    // CAnimal을(를) 통해 상속됨
    virtual void 울다() override;
};

