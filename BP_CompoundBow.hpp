#ifndef UE4SS_SDK_BP_CompoundBow_HPP
#define UE4SS_SDK_BP_CompoundBow_HPP

class ABP_CompoundBow_C : public ABP_BowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0748 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CompoundBow(int32 EntryPoint);
}; // Size: 0x750

#endif
