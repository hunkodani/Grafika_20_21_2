#ifndef CAMERA_H
#define CAMERA_H

#include "utils.h"

/**
 * Camera, as a moving point with direction
 */
typedef struct Camera
{
    vec3 position;
    vec3 rotation;
    vec3 speed;
} Camera;

/**
 * Is the helpbar visible?
 */
int is_help_visible;

/**
 * Initialize the camera to the start position.
 */
void init_camera(Camera* camera);

/**
 * Update the position of the camera.
 */
void update_camera(Camera* camera, double time);

/**
 * Apply the camera settings to the view transformation.
 */
void set_view(const Camera* camera);

/**
 * Set the horizontal and vertical rotation of the view angle.
 */
void rotate_camera(Camera* camera, double horizontal, double vertical);

/**
 * Set the speed of forward and backward motion.
 */
void set_camera_speed(Camera* camera, double speed);

/**
 * Set the speed of left and right side steps.
 */
void set_camera_side_speed(Camera* camera, double speed);

/**
 * Set the speed of up and down side steps.
 */
void set_camera_vertical_speed(Camera* camera, double speed);

/**
 * Show the help
 */
void show_help();

/**
 * Shows the HUD
 */
void show_HUD();

#endif /* CAMERA_H */
