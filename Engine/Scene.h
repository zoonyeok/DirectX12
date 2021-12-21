#pragma once

class GameObject;


class Scene
{
public:
	void Awake();
	void Start();
	void Update();
	void LateUpdate();

	void AddGameObject(shared_ptr<GameObject> gameObject);
	void RemoveGameObject(shared_ptr<GameObject> gameObject);

private:
	vector<shared_ptr<GameObject>> _gameObjects;
	// Unity 최적화위해 Layer
	// [ 0 ] Wall
	// [ 1 ] Monster
	//  ...
	// [ 31 ] 
};

