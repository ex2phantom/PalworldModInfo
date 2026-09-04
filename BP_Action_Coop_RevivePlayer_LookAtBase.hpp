#ifndef UE4SS_SDK_BP_Action_Coop_RevivePlayer_LookAtBase_HPP
#define UE4SS_SDK_BP_Action_Coop_RevivePlayer_LookAtBase_HPP

class UBP_Action_Coop_RevivePlayer_LookAtBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double Timer;                                                                     // 0x0168 (size: 0x8)
    double MaxTime;                                                                   // 0x0170 (size: 0x8)
    FName flagName;                                                                   // 0x0178 (size: 0x8)
    EPalFacialEyeType EyeType;                                                        // 0x0180 (size: 0x1)

    void ChangeFace(bool Enable);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_RevivePlayer_LookAtBase(int32 EntryPoint);
}; // Size: 0x181

#endif
