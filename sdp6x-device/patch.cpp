#pragma XOD require "https://github.com/WaylandM/Sensirion_SDP6x_pressure_sens"

#include <Wire.h>
#include <SDP6x.h>

node {
    meta {
        using Type = SDP6xClass*;
    }

    uint8_t mem[sizeof(SDP6xClass)];
    
    void evaluate(Context ctx) {
        if (!isSettingUp()) return;

        auto wire = getValue<input_I2C>(ctx);
        auto sf = getValue<input_SF>(ctx);

        Type sensor = new (mem) SDP6xClass(*wire, sf);

        emitValue<output_DEV>(ctx, sensor);

    }
}
