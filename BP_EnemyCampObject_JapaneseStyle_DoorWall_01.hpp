#ifndef UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_01_HPP
#define UE4SS_SDK_BP_EnemyCampObject_JapaneseStyle_DoorWall_01_HPP

class ABP_EnemyCampObject_JapaneseStyle_DoorWall_01_C : public APalBuildObjectBasicBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class UPalMapObjectDoorParameterComponent* DoorParameter;                         // 0x0788 (size: 0x8)
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;  // 0x0790 (size: 0x8)
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA_R;                   // 0x0798 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x07A0 (size: 0x8)
    class UBoxComponent* FrameCollision_02;                                           // 0x07A8 (size: 0x8)
    class UBoxComponent* FrameCollision_01;                                           // 0x07B0 (size: 0x8)
    class USceneComponent* FrameCollision;                                            // 0x07B8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x07C0 (size: 0x8)
    class UBoxComponent* DoorCollision;                                               // 0x07C8 (size: 0x8)
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA_L;                   // 0x07D0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x07D8 (size: 0x8)
    class UStaticMeshComponent* Architecture_JapaneseStyle_DoorA;                     // 0x07E0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07E8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07F0 (size: 0x8)
    float _______MoveDoor_7597B9FE48DD945E999EB1803E2940FB;                           // 0x07F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_7597B9FE48DD945E999EB1803E2940FB; // 0x07FC (size: 0x1)
    class UTimelineComponent* タイムライン;                                                 // 0x0800 (size: 0x8)
    double MoveDoorDistance;                                                          // 0x0808 (size: 0x8)

    void SetMoveDoor(class UStaticMeshComponent* Mesh, double MoveDIrection, double MoveDistanceNormal);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void ExecuteUbergraph_BP_EnemyCampObject_JapaneseStyle_DoorWall_01(int32 EntryPoint);
}; // Size: 0x810

#endif
