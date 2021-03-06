// Copyright(c) 2017 POLYGONTEK
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
// http ://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Precompiled.h"
#include "Script/LuaVM.h"
#include "Components/ComSkinnedMeshRenderer.h"

BE_NAMESPACE_BEGIN

void LuaVM::RegisterSkinnedMeshRendererComponent(LuaCpp::Module &module) {
    LuaCpp::Selector _ComSkinnedMeshRenderer = module["ComSkinnedMeshRenderer"];

    _ComSkinnedMeshRenderer.SetClass<ComSkinnedMeshRenderer>(module["ComMeshRenderer"]);
    _ComSkinnedMeshRenderer.AddClassMembers<ComSkinnedMeshRenderer>(
        "translation", &ComSkinnedMeshRenderer::GetTranslation,
        "translation_delta", &ComSkinnedMeshRenderer::GetTranslationDelta,
        "rotation_delta", &ComSkinnedMeshRenderer::GetRotationDelta,
        "set_anim_parameter", &ComSkinnedMeshRenderer::SetAnimParameter,
        "reset_anim_state", &ComSkinnedMeshRenderer::ResetAnimState,
        "current_anim_state", &ComSkinnedMeshRenderer::GetCurrentAnimState,
        "transit_anim_state", &ComSkinnedMeshRenderer::TransitAnimState,
        "play_starttime", &ComSkinnedMeshRenderer::GetPlayStartTime,
        "update_animation", &ComSkinnedMeshRenderer::UpdateAnimation);

    _ComSkinnedMeshRenderer["meta_object"] = ComSkinnedMeshRenderer::metaObject;
}

BE_NAMESPACE_END