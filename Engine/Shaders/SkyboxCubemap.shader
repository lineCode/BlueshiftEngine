shader "Skybox/CubeMap" {
    properties {
        tint("Tint") : vec4 = "1 1 1 1"
        exposure("Exposure") : float range 0 8 0.1 = "1.0"
        rotation("Rotation") : float range 0 360 1 = "0"
        skyCubeMap("Cube Map") : object TextureAsset = "_defaultCubeTexture"
    }

    glsl_vp {
        $include "SkyboxCubemap.vp"
    }

    glsl_fp {
        $include "SkyboxCubemap.fp"
    }
}