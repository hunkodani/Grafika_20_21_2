#ifndef SCENE_H
#define SCENE_H

#include "camera.h"
#include "texture.h"
#include "xwing.h"
#include "destination_and_target.h"
#include "laserbeam.h"
#include "asteroids.h"
#include <stdbool.h>

typedef struct Scene
{
    Xwing xwing;
    /*Laserbeam laserbeams[4];*/
    Laserbeam laserbeam_dummy;
    LaserNode* head;
    Asteroids geostatObj;
    Destination dest_point[2];
    Target target[2];
    bool isPaused;
    double lightIntensity;
    float fogIntensity;
    bool origin;
} Scene;

/**
 * Counts how many times the xwing reached the destination
 */
int dest_counter;

/**
 * Counts how many times the xwing destroyed the target
 */
int target_counter;

/**
 * Initialize the scene by loading models.
 */
void init_scene(Scene* scene);

/**
 * Set the lighting of the scene.
 */
void set_lighting(Scene* scene);

/**
 * Set the current material.
 */
void set_material(const Material* material);

/**
 * Draw the scene objects.
 */
void draw_scene(Scene* scene);

/**
 * Draw the origin of the world coordinate system.
 */
void draw_origin();

/**
 * Adds a fog layer to the scene
 */
void fog(Scene* scene);

/**
 * Places the given string to the given position in the world (facing to the camera)
 */
void textDrawToWorld(float x, float y, float z, void* font, char* string, Color color);

#endif /* SCENE_H */
