#ifndef UE4SS_SDK_BP_AIActionMetalDetector_HPP
#define UE4SS_SDK_BP_AIActionMetalDetector_HPP

class UBP_AIActionMetalDetector_C : public UBP_AIActionSearchBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    bool IsSearchCompleted;                                                           // 0x0180 (size: 0x1)
    class APalMapObject* ApproarchTarget;                                             // 0x0188 (size: 0x8)

    void SetupAction(class APawn* ControlledPawn);
    void OnNotifyEnd_16E7720D4D0387A8F7428BAC0CFE9882(FName NotifyName);
    void OnNotifyBegin_16E7720D4D0387A8F7428BAC0CFE9882(FName NotifyName);
    void OnInterrupted_16E7720D4D0387A8F7428BAC0CFE9882(FName NotifyName);
    void OnBlendOut_16E7720D4D0387A8F7428BAC0CFE9882(FName NotifyName);
    void OnCompleted_16E7720D4D0387A8F7428BAC0CFE9882(FName NotifyName);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void OnEndSearchAction();
    void CoopFinish();
    void ExecuteUbergraph_BP_AIActionMetalDetector(int32 EntryPoint);
}; // Size: 0x190

#endif
