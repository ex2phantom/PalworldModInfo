#ifndef UE4SS_SDK_BP_Action_Coop_OpenTreasure_HPP
#define UE4SS_SDK_BP_Action_Coop_OpenTreasure_HPP

class UBP_Action_Coop_OpenTreasure_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void OnNotifyEnd_B56301134822E3160E8BA0A891F555A4(FName NotifyName);
    void OnNotifyBegin_B56301134822E3160E8BA0A891F555A4(FName NotifyName);
    void OnInterrupted_B56301134822E3160E8BA0A891F555A4(FName NotifyName);
    void OnBlendOut_B56301134822E3160E8BA0A891F555A4(FName NotifyName);
    void OnCompleted_B56301134822E3160E8BA0A891F555A4(FName NotifyName);
    void OnNotifyEnd_21B88C504619DCB71EB625B2D171AA26(FName NotifyName);
    void OnNotifyBegin_21B88C504619DCB71EB625B2D171AA26(FName NotifyName);
    void OnInterrupted_21B88C504619DCB71EB625B2D171AA26(FName NotifyName);
    void OnBlendOut_21B88C504619DCB71EB625B2D171AA26(FName NotifyName);
    void OnCompleted_21B88C504619DCB71EB625B2D171AA26(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_OpenTreasure(int32 EntryPoint);
}; // Size: 0x168

#endif
