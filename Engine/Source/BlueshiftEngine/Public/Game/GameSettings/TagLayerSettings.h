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

#pragma once

#include "Game/GameSettings/GameSettings.h"

BE_NAMESPACE_BEGIN

class TagLayerSettings : public GameSettings {
public:
    enum {
        DefaultLayer,
        UILayer,
        EditorLayer,
    };

    OBJECT_PROTOTYPE(TagLayerSettings);

    TagLayerSettings() {}

    virtual void			Init() override;

    int32_t					FindTag(const char *tagName) const;
    int32_t					FindLayer(const char *layerName) const;

protected:
    void					PropertyChanged(const char *classname, const char *propName);
};

BE_NAMESPACE_END