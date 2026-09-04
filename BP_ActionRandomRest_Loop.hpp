#ifndef UE4SS_SDK_BP_ActionRandomRest_Loop_HPP
#define UE4SS_SDK_BP_ActionRandomRest_Loop_HPP

class UBP_ActionRandomRest_Loop_C : public UBP_ActionRandomRest_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0198 (size: 0x8)

    void OnEndAction();
    void Loop();
    void ExecuteUbergraph_BP_ActionRandomRest_Loop(int32 EntryPoint);
}; // Size: 0x1A0

#endif
