#ifndef UE4SS_SDK_BP_KingWhale_BOSS_otomo_HPP
#define UE4SS_SDK_BP_KingWhale_BOSS_otomo_HPP

class ABP_KingWhale_BOSS_otomo_C : public ABP_KingWhale_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D98 (size: 0x8)
    class UPalBaseCampOrbitComponent* PalBaseCampOrbit;                               // 0x0DA0 (size: 0x8)
    class UBP_PalRideMarkerSaddle_C* BP_PalRideMarkerSaddle;                          // 0x0DA8 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule12;                       // 0x0DB0 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule11;                       // 0x0DB8 (size: 0x8)
    class UNiagaraComponent* MarkEffect;                                              // 0x0DC0 (size: 0x8)
    FBP_KingWhale_BOSS_otomo_COnAirLargeDown OnAirLargeDown;                          // 0x0DC8 (size: 0x10)
    void OnAirLargeDown();

    void ReceiveBeginPlay();
    void OnChangeActiveActorDelegate_Event(bool bIsActive);
    void ExecuteUbergraph_BP_KingWhale_BOSS_otomo(int32 EntryPoint);
    void OnAirLargeDown__DelegateSignature();
}; // Size: 0xDD8

#endif
