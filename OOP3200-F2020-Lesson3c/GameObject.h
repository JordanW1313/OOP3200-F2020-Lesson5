#pragma once
#include "Vector2D.h"

#ifndef _GAME_OBJECT_
#define _GAME_OBJECT_

class GameObject
{
public:
	// Constructor
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);

	//Rule of Three
	~GameObject(); // destructor
	GameObject(const GameObject& other_object); // copy constructor
	GameObject& operator=(const GameObject& other_object); // Assignment operator

	// Accessors
	Vector2D GetPosition() const;
	int GetID() const;

	// Mutators
	void SetPosition(const float x, const float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);
	// Utility Functions
	int m_id;
	std::string ToString() const;

private:
	Vector2D m_position;
};

#endif
