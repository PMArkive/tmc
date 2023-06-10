#include "manager.h"

// TODO: change all manager arguments to be Entity* and cast to specific type later.
void (*const gMiscManagerunctions[])() = {
    NULL,
    LightRayManager_Main,
    VerticalMinishPathBackgroundManager_Main,
    MinishPortalManager_Main,
    DiggingCaveEntranceManager_Main,
    BridgeManager_Main,
    SpecialWarpManager_Main,
    MinishVillageTilesetManager_Main,
    HorizontalMinishPathBackgroundManager_Main,
    MinishRaftersBackgroundManager_Main,
    EzloHintManager_Main,
    FightManager_Main,
    RollingBarrelManager_Main,
    TileChangeObserveManager_Main,
    EntitySpawnManager_Main,
    MiscManager_Main,
    WeatherChangeManager_Main,
    FlagAndOperatorManager_Main,
    HyruleTownTilesetManager_Main,
    HouseSignManager_Main,
    SteamOverlayManager_Main,
    TempleOfDropletsManager_Main,
    DelayedEntityLoadManager_Main,
    FallingItemManager_Main,
    CloudOverlayManager_Main,
    PowBackgroundManager_Main,
    HoleManager_Main,
    StaticBackgroundManager_Main,
    RainfallManager_Main,
    AnimatedBackgroundManager_Main,
    RegionTriggerManager_Main,
    RailIntersectionManager_Main,
    MoveableObjectManager_Main,
    MinishSizedEntranceManager_Main,
    LightManager_Main,
    LightLevelSetManager_Main,
    BombableWallManager_Main,
    FlameManager_Main,
    PushableFurnitureManager_Main,
    ArmosInteriorManager_Main,
    EnemyInteractionManager_Main,
    Manager29_Main,
    DestructibleTileObserveManager_Main,
    AngryStatueManager_Main,
    CloudStaircaseTransitionManager_Main,
    WaterfallBottomManager_Main,
    SecretManager_Main,
    Vaati3BackgroundManager_Main,
    TilePuzzleManager_Main,
    GoronMerchantShopManager_Main,
    VaatiAppearingManager_Main,
    HyruleTownBellManager_Main,
    Vaati3InsideArmManager_Main,
    CameraTargetManager_Main,
    RepeatedSoundManager_Main,
    Vaati3StartManager_Main,
    FloatingPlatformManager_Main,
    EnterRoomTextboxManager_Main,
};

void ManagerUpdate(Entity* this) {
    if (!EntityIsDeleted(this))
        gMiscManagerunctions[this->id](this);
}
