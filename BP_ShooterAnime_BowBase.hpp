#ifndef UE4SS_SDK_BP_ShooterAnime_BowBase_HPP
#define UE4SS_SDK_BP_ShooterAnime_BowBase_HPP

class UBP_ShooterAnime_BowBase_C : public UPalShooterAnimeAssetBase
{
    class UAnimMontage* Charge_Ride_up;                                               // 0x0328 (size: 0x8)
    class UAnimMontage* ChargeLoop_Ride_up;                                           // 0x0330 (size: 0x8)
    class UAnimMontage* Fire_Ride_up;                                                 // 0x0338 (size: 0x8)

    void Change_FireAnime_forRide();
    void GetChargeLoopAnime_forRide(class UAnimMontage*& Result);
    void Change_ChargeAnime_forRide();
}; // Size: 0x340

#endif
