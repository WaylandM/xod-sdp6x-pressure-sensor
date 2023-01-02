#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_UPD

node {

    void evaluate(Context ctx) {
       // The node responds only if there is an input pulse
       if (!isInputDirty<input_UPD>(ctx))
           return;

        auto sensor = getValue<input_DEV>(ctx);
        auto res = getValue<input_RES>(ctx);

        if (res==9) {
            sensor->SetSensorResolution(RESOLUTION_9BIT);
            emitValue<output_DONE>(ctx, 1);
        }

        if (res==10) {
            sensor->SetSensorResolution(RESOLUTION_10BIT);
            emitValue<output_DONE>(ctx, 1);
        }

        if (res==11) {
            sensor->SetSensorResolution(RESOLUTION_11BIT);
            emitValue<output_DONE>(ctx, 1);
        }

        if (res==12) {
            sensor->SetSensorResolution(RESOLUTION_12BIT);
            emitValue<output_DONE>(ctx, 1);
        }

        if (res==13) {
            sensor->SetSensorResolution(RESOLUTION_13BIT);
            emitValue<output_DONE>(ctx, 1);
        }

        if (res==14) {
            sensor->SetSensorResolution(RESOLUTION_14BIT);
            emitValue<output_DONE>(ctx, 1);
        }

        if (res==15) {
            sensor->SetSensorResolution(RESOLUTION_15BIT);
            emitValue<output_DONE>(ctx, 1);
        }

        if (res==16) {
            sensor->SetSensorResolution(RESOLUTION_16BIT);
            emitValue<output_DONE>(ctx, 1);
        }
    }
}
