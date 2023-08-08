#include <stdio.h>
#include <zcm/zcm.h>
#include "ADCU_CAN_CMD.h"
#include "SCU_CAN_STS.h"


void callback_handler(const zcm_recv_buf_t *rbuf, const char *channel, const SCU_CAN_STS *msg, void *usr)
{
    printf("Received a message on channel '%s'\n", channel);
    printf("msg->LngCtrlMode            = '%d'\n", msg->LngCtrlMode);
    printf("msg->LngAutoCheckReport     = '%d'\n", msg->LngAutoCheckReport);
    printf("msg->LngQuitReport          = '%d'\n", msg->LngQuitReport);
    printf("msg->GearLeverIntv          = '%d'\n", msg->GearLeverIntv);
    printf("msg->BrkPedalSt             = '%d'\n", msg->BrkPedalSt);
    printf("msg->ActVehWheelTorq        = '%d'\n", msg->ActVehWheelTorq);
    printf("msg->VehWheelTorqMax        = '%d'\n", msg->VehWheelTorqMax);
    printf("msg->GasPedalAcPst          = '%f'\n", msg->GasPedalAcPst);
    printf("msg->AccElecECFail          = '%d'\n", msg->AccElecECFail);
    printf("msg->VehRdySt               = '%d'\n", msg->VehRdySt);
    printf("msg->VehDrvMod              = '%d'\n", msg->VehDrvMod);
    printf("msg->VehRng                 = '%d'\n", msg->VehRng);
    printf("msg->CrntGearLvl            = '%d'\n", msg->CrntGearLvl);
    printf("msg->VehSpd                 = '%f'\n", msg->VehSpd);
    printf("msg->ABSActiveSt            = '%d'\n", msg->ABSActiveSt);
    printf("msg->CDDAvailable           = '%d'\n", msg->CDDAvailable);
    printf("msg->AEBAvailable           = '%d'\n", msg->AEBAvailable);
    printf("msg->CDDFail                = '%d'\n", msg->CDDFail);
    printf("msg->CDDActive              = '%d'\n", msg->CDDActive);
    printf("msg->AEBActive              = '%d'\n", msg->AEBActive);
    printf("msg->VehicleStandStillSt    = '%d'\n", msg->VehicleStandStillSt);
    printf("msg->ActVehLongAccel        = '%f'\n", msg->ActVehLongAccel);
    printf("msg->VehLongAccelOffset     = '%f'\n", msg->VehLongAccelOffset);
    printf("msg->SysSt                  = '%d'\n", msg->SysSt);
    printf("msg->SwitchSt               = '%d'\n", msg->SwitchSt);
    printf("msg->FailSt                 = '%d'\n", msg->FailSt);
    printf("msg->LatCtrlMode            = '%d'\n", msg->LatCtrlMode);
    printf("msg->LatAutoCheckReport     = '%d'\n", msg->LatAutoCheckReport);
    printf("msg->LatQuitReport          = '%d'\n", msg->LatQuitReport);
    printf("msg->StrngWhlIntv           = '%d'\n", msg->StrngWhlIntv);
    printf("msg->SteeringAngle          = '%f'\n", msg->SteeringAngle);
    printf("msg->SteeringAngleVD        = '%d'\n", msg->SteeringAngleVD);
    printf("msg->SteeringAngleSpd       = '%d'\n", msg->SteeringAngleSpd);
    printf("msg->SteeringAngleSpdVD     = '%d'\n", msg->SteeringAngleSpdVD);
    printf("msg->StrngWhlTorq           = '%f'\n", msg->StrngWhlTorq);
    printf("msg->StrngWhlTorqVD         = '%d'\n", msg->StrngWhlTorqVD);
    printf("msg->WarnLamp               = '%d'\n", msg->WarnLamp);
    printf("msg->ActVeLaltrlAccel       = '%f'\n", msg->ActVeLaltrlAccel);
    printf("msg->VehLaltrlAccelOffset   = '%f'\n", msg->VehLaltrlAccelOffset);
    printf("msg->YawRate                = '%f'\n", msg->YawRate);
    printf("msg->YawRateOffset          = '%f'\n", msg->YawRateOffset);
    printf("\n");
}

int main(int argc, char *argv[])
{
    zcm_t *zcm = zcm_create("ipc");
    SCU_CAN_STS_subscribe(zcm, "CAN_STS", callback_handler, NULL);

    zcm_run(zcm);

    // Can also call zcm_start(zcm); to spawn a new thread that calls zcm_run(zcm);
    //
    // zcm_start(zcm)
    // while(!done) { do stuff; sleep; }
    // zcm_stop(zcm);
    //

    zcm_destroy(zcm);
    return 0;
}