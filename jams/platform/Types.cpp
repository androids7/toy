#include <infra/Cpp20.h>

#ifdef MUD_MODULES
module ._platform;
#else
#include <platform/Types.h>
#include <platform/Api.h>
#include <type/Vector.h>
#endif

namespace mud
{
    // Exported types
    template <> _PLATFORM_EXPORT Type& type<Faction>() { static Type ty("Faction", sizeof(Faction)); return ty; }
    
    template <> _PLATFORM_EXPORT Type& type<Aim>() { static Type ty("Aim", sizeof(Aim)); return ty; }
    template <> _PLATFORM_EXPORT Type& type<Bullet>() { static Type ty("Bullet", sizeof(Bullet)); return ty; }
    template <> _PLATFORM_EXPORT Type& type<Crate>() { static Type ty("Crate", sizeof(Crate)); return ty; }
    template <> _PLATFORM_EXPORT Type& type<Human>() { static Type ty("Human", sizeof(Human)); return ty; }
    template <> _PLATFORM_EXPORT Type& type<Lamp>() { static Type ty("Lamp", sizeof(Lamp)); return ty; }
    template <> _PLATFORM_EXPORT Type& type<Player>() { static Type ty("Player", sizeof(Player)); return ty; }
    template <> _PLATFORM_EXPORT Type& type<Stance>() { static Type ty("Stance", sizeof(Stance)); return ty; }
    template <> _PLATFORM_EXPORT Type& type<TileWorld>() { static Type ty("TileWorld", type<mud::Complex>(), sizeof(TileWorld)); return ty; }
}
