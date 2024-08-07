#pragma once

#include "runtime/function/framework/component/component.h"

namespace Piccolo
{
    REFLECTION_TYPE(LuaComponent)
    CLASS(LuaComponent : public Component, WhiteListFields)
    {
        REFLECTION_BODY(LuaComponent)

    public:
        LuaComponent() = default;

        void postLoadResource(std::weak_ptr<GObject> parent_object) override;

        void tick(float delta_time) override;

    protected:
        META(Enable)
        std::string m_lua_script;
    };
} // namespace Piccolo
