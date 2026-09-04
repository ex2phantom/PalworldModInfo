#ifndef UE4SS_SDK_BP_BuildObject_Stone_Gate_HPP
#define UE4SS_SDK_BP_BuildObject_Stone_Gate_HPP

class ABP_BuildObject_Stone_Gate_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0758 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0760 (size: 0x8)
    class UPalMapObjectDoorParameterComponent* DoorParameter;                         // 0x0768 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x0770 (size: 0x8)
    class UStaticMeshComponent* SM_Gate_Base_Wood;                                    // 0x0778 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Door1;                                        // 0x0780 (size: 0x8)
    class UBoxComponent* VirtualMeshCollision;                                        // 0x0788 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0790 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0798 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Door;                                         // 0x07A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07A8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07B0 (size: 0x8)
    float _______RotateDoor_A5A1C09248613C99C04ACD94EF87559C;                         // 0x07B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_A5A1C09248613C99C04ACD94EF87559C; // 0x07BC (size: 0x1)
    class UTimelineComponent* タイムライン;                                                 // 0x07C0 (size: 0x8)

    void SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void OnAvailable_BlueprintImpl();
    void ExecuteUbergraph_BP_BuildObject_Stone_Gate(int32 EntryPoint);
}; // Size: 0x7C8

#endif
