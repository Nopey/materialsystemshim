// AUTOGENERATED BY preciseVTableToCPP.py
#include "imaterialsystem.h"

class CMaterialSystemShim: public IMaterialSystem {
    IMaterialSystem *valve;
public:
    CMaterialSystemShim(IMaterialSystem *valve): valve(valve) {}
    virtual undefined Connect(FuncDef181 * param_1) override {
        return valve->Connect(param_1);
    }
    virtual undefined Disconnect(void) override {
        return valve->Disconnect();
    }
    virtual undefined QueryInterface(char * param_1) override {
        return valve->QueryInterface(param_1);
    }
    virtual undefined Init(void) override {
        return valve->Init();
    }
    virtual undefined Shutdown(void) override {
        return valve->Shutdown();
    }
    virtual undefined Init(char * param_1, IMaterialProxyFactory * param_2, FuncDef183 * param_3, FuncDef184 * param_4) override {
        return valve->Init(param_1, param_2, param_3, param_4);
    }
    virtual undefined SetShaderAPI(char * param_1) override {
        return valve->SetShaderAPI(param_1);
    }
    virtual undefined SetAdapter(int param_1, int param_2) override {
        return valve->SetAdapter(param_1, param_2);
    }
    virtual undefined ModInit(void) override {
        return valve->ModInit();
    }
    virtual undefined ModShutdown(void) override {
        return valve->ModShutdown();
    }
    virtual undefined SetThreadMode(MaterialThreadMode_t param_1, int param_2) override {
        return valve->SetThreadMode(param_1, param_2);
    }
    virtual undefined GetThreadMode(void) override {
        return valve->GetThreadMode();
    }
    virtual undefined IsRenderThreadSafe(void) override {
        return valve->IsRenderThreadSafe();
    }
    virtual undefined ExecuteQueued(void) override {
        return valve->ExecuteQueued();
    }
    virtual undefined GetHardwareConfig(char * param_1, int * param_2) override {
        return valve->GetHardwareConfig(param_1, param_2);
    }
    virtual undefined UpdateConfig(bool param_1) override {
        return valve->UpdateConfig(param_1);
    }
    virtual undefined OverrideConfig(MaterialSystem_Config_t * param_1, bool param_2) override {
        return valve->OverrideConfig(param_1, param_2);
    }
    virtual undefined GetCurrentConfigForVideoCard(void) override {
        return valve->GetCurrentConfigForVideoCard();
    }
    virtual undefined GetRecommendedConfigurationInfo(int param_1, KeyValues * param_2) override {
        return valve->GetRecommendedConfigurationInfo(param_1, param_2);
    }
    virtual undefined GetDisplayAdapterCount(void) override {
        return valve->GetDisplayAdapterCount();
    }
    virtual undefined GetCurrentAdapter(void) override {
        return valve->GetCurrentAdapter();
    }
    virtual undefined GetDisplayAdapterInfo(int param_1, MaterialAdapterInfo_t * param_2) override {
        return valve->GetDisplayAdapterInfo(param_1, param_2);
    }
    virtual undefined GetModeCount(int param_1) override {
        return valve->GetModeCount(param_1);
    }
    virtual undefined GetModeInfo(int param_1, int param_2, MaterialVideoMode_t * param_3) override {
        return valve->GetModeInfo(param_1, param_2, param_3);
    }
    virtual undefined AddModeChangeCallBack(FuncDef191 * param_1) override {
        return valve->AddModeChangeCallBack(param_1);
    }
    virtual undefined GetDisplayMode(MaterialVideoMode_t * param_1) override {
        return valve->GetDisplayMode(param_1);
    }
    virtual undefined SetMode(void * param_1, MaterialSystem_Config_t * param_2) override {
        return valve->SetMode(param_1, param_2);
    }
    virtual undefined SupportsMSAAMode(int param_1) override {
        return valve->SupportsMSAAMode(param_1);
    }
    virtual undefined GetVideoCardIdentifier(void) override {
        return valve->GetVideoCardIdentifier();
    }
    virtual undefined SpewDriverInfo(void) override {
        return valve->SpewDriverInfo();
    }
    virtual undefined GetDXLevelDefaults(uint * param_1, uint * param_2) override {
        return valve->GetDXLevelDefaults(param_1, param_2);
    }
    virtual undefined GetBackBufferDimensions(int * param_1, int * param_2) override {
        return valve->GetBackBufferDimensions(param_1, param_2);
    }
    virtual undefined GetBackBufferFormat(void) override {
        return valve->GetBackBufferFormat();
    }
    virtual undefined SupportsHDRMode(HDRType_t param_1) override {
        return valve->SupportsHDRMode(param_1);
    }
    virtual undefined AddView(void * param_1) override {
        return valve->AddView(param_1);
    }
    virtual undefined RemoveView(void * param_1) override {
        return valve->RemoveView(param_1);
    }
    virtual undefined SetView(void * param_1) override {
        return valve->SetView(param_1);
    }
    virtual undefined BeginFrame(float param_1) override {
        return valve->BeginFrame(param_1);
    }
    virtual undefined EndFrame(void) override {
        return valve->EndFrame();
    }
    virtual undefined Flush(bool param_1) override {
        return valve->Flush(param_1);
    }
    virtual undefined SwapBuffers(void) override {
        return valve->SwapBuffers();
    }
    virtual undefined EvictManagedResources(void) override {
        return valve->EvictManagedResources();
    }
    virtual undefined ReleaseResources(void) override {
        return valve->ReleaseResources();
    }
    virtual undefined ReacquireResources(void) override {
        return valve->ReacquireResources();
    }
    virtual undefined AddReleaseFunc(FuncDef185 * param_1) override {
        return valve->AddReleaseFunc(param_1);
    }
    virtual undefined RemoveReleaseFunc(FuncDef186 * param_1) override {
        return valve->RemoveReleaseFunc(param_1);
    }
    virtual undefined AddRestoreFunc(FuncDef187 * param_1) override {
        return valve->AddRestoreFunc(param_1);
    }
    virtual undefined RemoveRestoreFunc(FuncDef188 * param_1) override {
        return valve->RemoveRestoreFunc(param_1);
    }
    virtual undefined ResetTempHWMemory(bool param_1) override {
        return valve->ResetTempHWMemory(param_1);
    }
    virtual undefined HandleDeviceLost(void) override {
        return valve->HandleDeviceLost();
    }
    virtual undefined ShaderCount(void) override {
        return valve->ShaderCount();
    }
    virtual undefined GetShaders(int param_1, int param_2, IShader * * param_3) override {
        return valve->GetShaders(param_1, param_2, param_3);
    }
    virtual undefined ShaderFlagCount(void) override {
        return valve->ShaderFlagCount();
    }
    virtual undefined ShaderFlagName(int param_1) override {
        return valve->ShaderFlagName(param_1);
    }
    virtual undefined GetShaderFallback(char * param_1, char * param_2, int param_3) override {
        return valve->GetShaderFallback(param_1, param_2, param_3);
    }
    virtual undefined GetMaterialProxyFactory(void) override {
        return valve->GetMaterialProxyFactory();
    }
    virtual undefined SetMaterialProxyFactory(IMaterialProxyFactory * param_1) override {
        return valve->SetMaterialProxyFactory(param_1);
    }
    virtual undefined EnableEditorMaterials(void) override {
        return valve->EnableEditorMaterials();
    }
    virtual undefined SetInStubMode(bool param_1) override {
        return valve->SetInStubMode(param_1);
    }
    virtual undefined DebugPrintUsedMaterials(char * param_1, bool param_2) override {
        return valve->DebugPrintUsedMaterials(param_1, param_2);
    }
    virtual undefined DebugPrintUsedTextures(void) override {
        return valve->DebugPrintUsedTextures();
    }
    virtual undefined ToggleSuppressMaterial(char * param_1) override {
        return valve->ToggleSuppressMaterial(param_1);
    }
    virtual undefined ToggleDebugMaterial(char * param_1) override {
        return valve->ToggleDebugMaterial(param_1);
    }
    virtual undefined UsingFastClipping(void) override {
        return valve->UsingFastClipping();
    }
    virtual undefined StencilBufferBits(void) override {
        return valve->StencilBufferBits();
    }
    virtual undefined SuspendTextureStreaming(void) override {
        return valve->SuspendTextureStreaming();
    }
    virtual undefined ResumeTextureStreaming(void) override {
        return valve->ResumeTextureStreaming();
    }
    virtual undefined UncacheAllMaterials(void) override {
        return valve->UncacheAllMaterials();
    }
    virtual undefined UncacheUnusedMaterials(bool param_1) override {
        return valve->UncacheUnusedMaterials(param_1);
    }
    virtual undefined CacheUsedMaterials(void) override {
        return valve->CacheUsedMaterials();
    }
    virtual undefined ReloadTextures(void) override {
        return valve->ReloadTextures();
    }
    virtual undefined ReloadMaterials(char * param_1) override {
        return valve->ReloadMaterials(param_1);
    }
    virtual undefined CreateMaterial(char * param_1, KeyValues * param_2) override {
        return valve->CreateMaterial(param_1, param_2);
    }
    virtual undefined FindMaterial(char * param_1, char * param_2, bool param_3, char * param_4) override {
        return valve->FindMaterial(param_1, param_2, param_3, param_4);
    }
    virtual undefined IsMaterialLoaded(char * param_1) override {
        return valve->IsMaterialLoaded(param_1);
    }
    virtual undefined FirstMaterial(void) override {
        return valve->FirstMaterial();
    }
    virtual undefined NextMaterial(ushort param_1) override {
        return valve->NextMaterial(param_1);
    }
    virtual undefined InvalidMaterial(void) override {
        return valve->InvalidMaterial();
    }
    virtual undefined GetMaterial(ushort param_1) override {
        return valve->GetMaterial(param_1);
    }
    virtual undefined GetNumMaterials(void) override {
        return valve->GetNumMaterials();
    }
    virtual undefined SetAsyncTextureLoadCache(void * param_1) override {
        return valve->SetAsyncTextureLoadCache(param_1);
    }
    virtual undefined FindTexture(char * param_1, char * param_2, bool param_3, int param_4) override {
        return valve->FindTexture(param_1, param_2, param_3, param_4);
    }
    virtual undefined IsTextureLoaded(char * param_1) override {
        return valve->IsTextureLoaded(param_1);
    }
    virtual undefined CreateProceduralTexture(char * param_1, char * param_2, int param_3, int param_4, ImageFormat param_5, int param_6) override {
        return valve->CreateProceduralTexture(param_1, param_2, param_3, param_4, param_5, param_6);
    }
    virtual undefined BeginRenderTargetAllocation(void) override {
        return valve->BeginRenderTargetAllocation();
    }
    virtual undefined EndRenderTargetAllocation(void) override {
        return valve->EndRenderTargetAllocation();
    }
    virtual undefined CreateRenderTargetTexture(int param_1, int param_2, RenderTargetSizeMode_t param_3, ImageFormat param_4, MaterialRenderTargetDepth_t param_5) override {
        return valve->CreateRenderTargetTexture(param_1, param_2, param_3, param_4, param_5);
    }
    virtual undefined CreateNamedRenderTargetTextureEx(char * param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, MaterialRenderTargetDepth_t param_6, uint param_7, uint param_8) override {
        return valve->CreateNamedRenderTargetTextureEx(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }
    virtual undefined CreateNamedRenderTargetTexture(char * param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, MaterialRenderTargetDepth_t param_6, bool param_7, bool param_8) override {
        return valve->CreateNamedRenderTargetTexture(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }
    virtual undefined CreateNamedRenderTargetTextureEx2(char * param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, MaterialRenderTargetDepth_t param_6, uint param_7, uint param_8) override {
        return valve->CreateNamedRenderTargetTextureEx2(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }
    virtual undefined BeginLightmapAllocation(void) override {
        return valve->BeginLightmapAllocation();
    }
    virtual undefined EndLightmapAllocation(void) override {
        return valve->EndLightmapAllocation();
    }
    virtual undefined AllocateLightmap(int param_1, int param_2, int * param_3, IMaterial * param_4) override {
        return valve->AllocateLightmap(param_1, param_2, param_3, param_4);
    }
    virtual undefined AllocateWhiteLightmap(IMaterial * param_1) override {
        return valve->AllocateWhiteLightmap(param_1);
    }
    virtual undefined UpdateLightmap(int param_1, int * param_2, int * param_3, float * param_4, float * param_5, float * param_6, float * param_7) override {
        return valve->UpdateLightmap(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }
    virtual undefined GetNumSortIDs(void) override {
        return valve->GetNumSortIDs();
    }
    virtual undefined GetSortInfo(MaterialSystem_SortInfo_t * param_1) override {
        return valve->GetSortInfo(param_1);
    }
    virtual undefined GetLightmapPageSize(int param_1, int * param_2, int * param_3) override {
        return valve->GetLightmapPageSize(param_1, param_2, param_3);
    }
    virtual undefined ResetMaterialLightmapPageInfo(void) override {
        return valve->ResetMaterialLightmapPageInfo();
    }
    virtual undefined ClearBuffers(bool param_1, bool param_2, bool param_3) override {
        return valve->ClearBuffers(param_1, param_2, param_3);
    }
    virtual undefined GetRenderContext(void) override {
        return valve->GetRenderContext();
    }
    virtual undefined SupportsShadowDepthTextures(void) override {
        return valve->SupportsShadowDepthTextures();
    }
    virtual undefined BeginUpdateLightmaps(void) override {
        return valve->BeginUpdateLightmaps();
    }
    virtual undefined EndUpdateLightmaps(void) override {
        return valve->EndUpdateLightmaps();
    }
    virtual undefined Lock(void) override {
        return valve->Lock();
    }
    virtual undefined Unlock(MaterialLock_t__ * param_1) override {
        return valve->Unlock(param_1);
    }
    virtual undefined GetShadowDepthTextureFormat(void) override {
        return valve->GetShadowDepthTextureFormat();
    }
    virtual undefined SupportsFetch4(void) override {
        return valve->SupportsFetch4();
    }
    virtual undefined CreateRenderContext(MaterialContextType_t param_1) override {
        return valve->CreateRenderContext(param_1);
    }
    virtual undefined SetRenderContext(IMatRenderContext * param_1) override {
        return valve->SetRenderContext(param_1);
    }
    virtual undefined SupportsCSAAMode(int param_1, int param_2) override {
        return valve->SupportsCSAAMode(param_1, param_2);
    }
    virtual undefined RemoveModeChangeCallBack(FuncDef192 * param_1) override {
        return valve->RemoveModeChangeCallBack(param_1);
    }
    virtual undefined FindProceduralMaterial(char * param_1, char * param_2, KeyValues * param_3) override {
        return valve->FindProceduralMaterial(param_1, param_2, param_3);
    }
    virtual undefined GetNullTextureFormat(void) override {
        return valve->GetNullTextureFormat();
    }
    virtual undefined AddTextureAlias(char * param_1, char * param_2) override {
        return valve->AddTextureAlias(param_1, param_2);
    }
    virtual undefined RemoveTextureAlias(char * param_1) override {
        return valve->RemoveTextureAlias(param_1);
    }
    virtual undefined AllocateDynamicLightmap(int * param_1, int * param_2, int param_3) override {
        return valve->AllocateDynamicLightmap(param_1, param_2, param_3);
    }
    virtual undefined SetExcludedTextures(char * param_1) override {
        return valve->SetExcludedTextures(param_1);
    }
    virtual undefined UpdateExcludedTextures(void) override {
        return valve->UpdateExcludedTextures();
    }
    virtual undefined IsInFrame(void) override {
        return valve->IsInFrame();
    }
    virtual undefined CompactMemory(void) override {
        return valve->CompactMemory();
    }
    virtual undefined ReloadFilesInList(IFileList * param_1) override {
        return valve->ReloadFilesInList(param_1);
    }
    virtual undefined AllowThreading(bool param_1, int param_2) override {
        return valve->AllowThreading(param_1, param_2);
    }
    virtual undefined FindMaterialEx(char * param_1, char * param_2, int param_3, bool param_4, char * param_5) override {
        return valve->FindMaterialEx(param_1, param_2, param_3, param_4, param_5);
    }
    virtual undefined DoStartupShaderPreloading(void) override {
        return valve->DoStartupShaderPreloading();
    }
    virtual undefined SetRenderTargetFrameBufferSizeOverrides(int param_1, int param_2) override {
        return valve->SetRenderTargetFrameBufferSizeOverrides(param_1, param_2);
    }
    virtual undefined GetRenderTargetFrameBufferDimensions(int * param_1, int * param_2) override {
        return valve->GetRenderTargetFrameBufferDimensions(param_1, param_2);
    }
    virtual undefined GetDisplayDeviceName(void) override {
        return valve->GetDisplayDeviceName();
    }
    virtual undefined CreateTextureFromBits(int param_1, int param_2, int param_3, ImageFormat param_4, int param_5, uchar * param_6) override {
        return valve->CreateTextureFromBits(param_1, param_2, param_3, param_4, param_5, param_6);
    }
    virtual undefined OverrideRenderTargetAllocation(bool param_1) override {
        return valve->OverrideRenderTargetAllocation(param_1);
    }
    virtual undefined NewTextureCompositor(int param_1, int param_2, char * param_3, int param_4, long_long param_5, KeyValues * param_6, uint param_7) override {
        return valve->NewTextureCompositor(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }
    virtual undefined AsyncFindTexture(char * param_1, char * param_2, IAsyncTextureOperationReceiver * param_3, void * param_4, bool param_5, int param_6) override {
        return valve->AsyncFindTexture(param_1, param_2, param_3, param_4, param_5, param_6);
    }
    virtual undefined CreateNamedTextureFromBitsEx(char * param_1, char * param_2, int param_3, int param_4, int param_5, ImageFormat param_6, int param_7, uchar * param_8, int param_9) override {
        return valve->CreateNamedTextureFromBitsEx(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
    }
    virtual undefined AddTextureCompositorTemplate(char * param_1, KeyValues * param_2, int param_3) override {
        return valve->AddTextureCompositorTemplate(param_1, param_2, param_3);
    }
    virtual undefined VerifyTextureCompositorTemplates(void) override {
        return valve->VerifyTextureCompositorTemplates();
    }
    virtual undefined GetCurrentMaterial(void) override {
        return valve->GetCurrentMaterial();
    }
    virtual undefined GetLightmapPage(void) override {
        return valve->GetLightmapPage();
    }
    virtual undefined GetLightmapWidth(int param_1) override {
        return valve->GetLightmapWidth(param_1);
    }
    virtual undefined GetLightmapHeight(int param_1) override {
        return valve->GetLightmapHeight(param_1);
    }
    virtual undefined GetLocalCubemap(void) override {
        return valve->GetLocalCubemap();
    }
    virtual undefined ForceDepthFuncEquals(bool param_1) override {
        return valve->ForceDepthFuncEquals(param_1);
    }
    virtual undefined GetHeightClipMode(void) override {
        return valve->GetHeightClipMode();
    }
    virtual undefined AddMaterialToMaterialList(IMaterialInternal * param_1) override {
        return valve->AddMaterialToMaterialList(param_1);
    }
    virtual undefined RemoveMaterial(IMaterialInternal * param_1) override {
        return valve->RemoveMaterial(param_1);
    }
    virtual undefined RemoveMaterialSubRect(IMaterialInternal * param_1) override {
        return valve->RemoveMaterialSubRect(param_1);
    }
    virtual undefined InFlashlightMode(void) override {
        return valve->InFlashlightMode();
    }
    virtual undefined CanUseEditorMaterials(void) override {
        return valve->CanUseEditorMaterials();
    }
    virtual undefined GetForcedTextureLoadPathID(void) override {
        return valve->GetForcedTextureLoadPathID();
    }
    virtual undefined GetRenderCallQueue(void) override {
        return valve->GetRenderCallQueue();
    }
    virtual undefined UnbindMaterial(IMaterial * param_1) override {
        return valve->UnbindMaterial(param_1);
    }
    virtual undefined GetRenderThreadId(void) override {
        return valve->GetRenderThreadId();
    }
    virtual undefined DetermineProxyReplacements(IMaterial * param_1, KeyValues * param_2) override {
        return valve->DetermineProxyReplacements(param_1, param_2);
    }
    virtual undefined GetConfig(void) override {
        return valve->GetConfig();
    }
    virtual undefined NoteAnisotropicLevel(int param_1) override {
        return valve->NoteAnisotropicLevel(param_1);
    }
    virtual undefined ReleaseShaderObjects(void) override {
        return valve->ReleaseShaderObjects();
    }
    virtual undefined RestoreShaderObjects(FuncDef189 * param_1, int param_2) override {
        return valve->RestoreShaderObjects(param_1, param_2);
    }
    virtual undefined InEditorMode(void) override {
        return valve->InEditorMode();
    }
    virtual undefined IsInStubMode(void) override {
        return valve->IsInStubMode();
    }
    virtual undefined ImageFormatInfo(ImageFormat param_1) override {
        return valve->ImageFormatInfo(param_1);
    }
    virtual undefined GetMemRequired(int param_1, int param_2, int param_3, ImageFormat param_4, bool param_5) override {
        return valve->GetMemRequired(param_1, param_2, param_3, param_4, param_5);
    }
    virtual undefined ConvertImageFormat(uchar * param_1, ImageFormat param_2, uchar * param_3, ImageFormat param_4, int param_5, int param_6, int param_7, int param_8) override {
        return valve->ConvertImageFormat(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }
    virtual undefined OnDrawMesh(IMesh * param_1, int param_2, int param_3) override {
        return valve->OnDrawMesh(param_1, param_2, param_3);
    }
    virtual undefined OnDrawMesh(IMesh * param_1, CPrimList * param_2, int param_3) override {
        return valve->OnDrawMesh(param_1, param_2, param_3);
    }
    virtual undefined OnSetFlexMesh(IMesh * param_1, IMesh * param_2, int param_3) override {
        return valve->OnSetFlexMesh(param_1, param_2, param_3);
    }
    virtual undefined OnSetColorMesh(IMesh * param_1, IMesh * param_2, int param_3) override {
        return valve->OnSetColorMesh(param_1, param_2, param_3);
    }
    virtual undefined OnSetPrimitiveType(IMesh * param_1, MaterialPrimitiveType_t param_2) override {
        return valve->OnSetPrimitiveType(param_1, param_2);
    }
    virtual undefined SyncMatrices(void) override {
        return valve->SyncMatrices();
    }
    virtual undefined SyncMatrix(MaterialMatrixMode_t param_1) override {
        return valve->SyncMatrix(param_1);
    }
    virtual undefined OnFlushBufferedPrimitives(void) override {
        return valve->OnFlushBufferedPrimitives();
    }
    virtual undefined OnThreadEvent(uint param_1) override {
        return valve->OnThreadEvent(param_1);
    }
    virtual undefined BindStandardTexture(Sampler_t param_1, StandardTextureId_t param_2) override {
        return valve->BindStandardTexture(param_1, param_2);
    }
    virtual undefined BindStandardVertexTexture(VertexTextureSampler_t param_1, StandardTextureId_t param_2) override {
        return valve->BindStandardVertexTexture(param_1, param_2);
    }
    virtual undefined GetLightmapDimensions(int * param_1, int * param_2) override {
        return valve->GetLightmapDimensions(param_1, param_2);
    }
    virtual undefined GetStandardTextureDimensions(int * param_1, int * param_2, StandardTextureId_t param_3) override {
        return valve->GetStandardTextureDimensions(param_1, param_2, param_3);
    }
    virtual undefined GetBoundMorphFormat(void) override {
        return valve->GetBoundMorphFormat();
    }
    virtual undefined GetRenderTargetEx(int param_1) override {
        return valve->GetRenderTargetEx(param_1);
    }
    virtual undefined DrawClearBufferQuad(uchar param_1, uchar param_2, uchar param_3, uchar param_4, bool param_5, bool param_6, bool param_7) override {
        return valve->DrawClearBufferQuad(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }
    virtual undefined MaxHWMorphBatchCount(void) override {
        return valve->MaxHWMorphBatchCount();
    }
    virtual undefined GetCurrentColorCorrection(ShaderColorCorrectionInfo_t * param_1) override {
        return valve->GetCurrentColorCorrection(param_1);
    }
};
