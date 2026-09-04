#ifndef UE4SS_SDK_BP_Action_Coop_RevivePlayer_Sad_HPP
#define UE4SS_SDK_BP_Action_Coop_RevivePlayer_Sad_HPP

class UBP_Action_Coop_RevivePlayer_Sad_C : public UBP_Action_Coop_RevivePlayer_LookAtBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)
    float MinTime;                                                                    // 0x0190 (size: 0x4)
    FVector ReviveLocationOffset;                                                     // 0x0198 (size: 0x18)

    FVector CalcReviveLocation();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Coop_RevivePlayer_Sad(int32 EntryPoint);
}; // Size: 0x1B0

#endif
