#pragma once
// copyright by Stefan Roettger (www.open-terrain.org), licensed under the "New BSD License"

#ifndef GEOID_H
#define GEOID_H

//! sample the geoid height at a geographic position
float sample_geoid(double latitude, double longitude);

float interpolate(float x, float y, const float* data, unsigned int width, unsigned int height);

#endif