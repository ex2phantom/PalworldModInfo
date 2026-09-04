#ifndef UE4SS_SDK_BP_Action_LargeDown_KingWhale_HPP
#define UE4SS_SDK_BP_Action_LargeDown_KingWhale_HPP

class UBP_Action_LargeDown_KingWhale_C : public UBP_Action_LargeDown_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    double ConstDownTime_Air;                                                         // 0x0178 (size: 0x8)

    void GetDownTime(double& Time);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_LargeDown_KingWhale(int32 EntryPoint);
}; // Size: 0x180

#endif
