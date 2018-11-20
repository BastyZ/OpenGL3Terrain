#version 330 core
// interpolated values from the vertex shader
in vec3 fragmentColor;
in vec3 Position_worldspace;
in vec3 Normal_cameraspace;
in vec3 EyeDirection_cameraspace;
in vec3 LightDirection_cameraspace;
in vec3 altura;
// output
out vec3 color;
//constants
uniform mat4 MV;
uniform vec3 LightPosition_worldspace;

void main() {

    // Light Emision
    vec3 LightColor =  vec3(1,1,0.8);
    float LightPower = 30.0f;

    vec3 MaterialDiffuseColor = vec3(0.1,0.1,0.1);
    vec3 MaterialAmbientColor = vec3(0.25,0.25,0.25) * MaterialDiffuseColor;
    vec3 MaterialSpecularColor = vec3(0.1,0.1,0.2);

    float distance = length( LightPosition_worldspace - Position_worldspace );

    vec3 n = normalize( Normal_cameraspace );
    vec3 l = normalize( LightDirection_cameraspace);
    float cosTheta = clamp( dot(n, l), 0, 1);

    vec3 E = normalize(EyeDirection_cameraspace);
    vec3 R = reflect(-l,n);

    float cosAlpha = clamp( dot( E,R ), 0,1 );

    // we pass it the color interpolated by the VShader
    //color = fragmentColor;

    vec3 verde_o = vec3(0.026,0.199,0.05);
    vec3 verde_c = vec3(0.019,0.8,0.031);
    vec3 amarillo = vec3(0.823,0.898,0.231);
    vec3 cafe = vec3(0.204,0.129,0.0157);
    vec3 gris = vec3(0.498,0.612,0.698);
    vec3 blanco = vec3(0.960,0.960,1);

    
    if (altura.y < 0.160030) {
        color = MaterialAmbientColor + 
        mix(verde_o, verde_c, smoothstep(0.0f,0.160030, altura.y)) * // verde oscuro
    	LightColor * LightPower * cosTheta / (distance*distance) + 
    	MaterialSpecularColor * LightColor* LightPower * pow(cosAlpha,5) / (distance*distance);
    } else if (altura.y < 0.320060) {
        color = MaterialAmbientColor + 
        mix(verde_c, amarillo, smoothstep(0.160030, 0.320060, altura.y)) * // verde oscuro
        LightColor * LightPower * cosTheta / (distance*distance) + 
        MaterialSpecularColor * LightColor* LightPower * pow(cosAlpha,5) / (distance*distance);
    } else if (altura.y < 0.640120) {
        color = MaterialAmbientColor + 
        mix(amarillo, cafe, smoothstep(0.320060, 0.640120, altura.y)) * // verde oscuro
        LightColor * LightPower * cosTheta / (distance*distance) + 
        MaterialSpecularColor * LightColor* LightPower * pow(cosAlpha,5) / (distance*distance);
    } else if (altura.y < 1.280240) {
        color = MaterialAmbientColor + 
        mix(cafe, gris, smoothstep(0.640120, 1.280240, altura.y)) * // verde oscuro
        LightColor * LightPower * cosTheta / (distance*distance) + 
        MaterialSpecularColor * LightColor* LightPower * pow(cosAlpha,5) / (distance*distance);
    } else if (altura.y < 2.560480) {
        color = MaterialAmbientColor + 
        mix(gris, blanco, smoothstep(1.280240,2.560480, altura.y)) * // verde oscuro
        LightColor * LightPower * cosTheta / (distance*distance) + 
        MaterialSpecularColor * LightColor* LightPower * pow(cosAlpha,5) / (distance*distance);
    } else {
        color = MaterialAmbientColor + 
        blanco * LightColor * LightPower * cosTheta / (distance*distance) + 
        MaterialSpecularColor * LightColor* LightPower * pow(cosAlpha,5) / (distance*distance);
    }

}
