#ifndef UE4SS_SDK_BP_Yeti_HPP
#define UE4SS_SDK_BP_Yeti_HPP

class ABP_Yeti_C : public ABP_MonsterBase_C
{
    class UBP_PalRideMarkerSit_C* BP_PalRideMarkerSit;                                // 0x0D30 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0D38 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere2;                          // 0x0D40 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0D48 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0D50 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D58 (size: 0x8)

}; // Size: 0xD60

#endif
