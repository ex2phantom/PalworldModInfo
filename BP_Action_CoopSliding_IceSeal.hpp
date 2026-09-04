#ifndef UE4SS_SDK_BP_Action_CoopSliding_IceSeal_HPP
#define UE4SS_SDK_BP_Action_CoopSliding_IceSeal_HPP

class UBP_Action_CoopSliding_IceSeal_C : public UBP_Action_CoopSliding_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    bool bIsOriginalValue;                                                            // 0x0178 (size: 0x1)
    double originalValue;                                                             // 0x0180 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_CoopSliding_IceSeal(int32 EntryPoint);
}; // Size: 0x188

#endif
