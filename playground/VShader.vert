#version 330 core
layout(location = 0) in vec3 vertexPosition_modelspace;
//layout(location = 1) in vec3 vertexColor;
layout(location = 2) in vec3 vertexNormal_modelspace;
// output
//out vec3 fragmentColor;
out vec3 Position_worldspace;
out vec3 Normal_cameraspace;
out vec3 EyeDirection_cameraspace;
out vec3 LightDirection_cameraspace;
out vec3 altura;

uniform mat4 mvp;
uniform mat4 v;
uniform mat4 m;
uniform vec3 LightPosition_worldspace;
void main() {
    
    gl_Position = mvp * vec4(vertexPosition_modelspace,1);
    
    Position_worldspace = (m * vec4(vertexPosition_modelspace,1)).xyz;
    altura = vertexPosition_modelspace;    

    vec3 vertexPosition_cameraspace = (v * m * vec4(vertexPosition_modelspace,1)).xyz;
    EyeDirection_cameraspace = vec3(0,0,0) - vertexPosition_cameraspace;
    
    vec3 LightPosition_cameraspace = (v * vec4(LightPosition_worldspace,1)).xyz;
    LightDirection_cameraspace = LightPosition_cameraspace + EyeDirection_cameraspace;
    
    Normal_cameraspace = (v * m * vec4(vertexNormal_modelspace,0)).xyz;

    //fragmentColor = vertexColor;
}
