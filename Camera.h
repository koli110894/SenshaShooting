// Camera.h
// カメラクラス


class Camera {
    int cameraX, cameraY;
    int cameraSpeed;
    int MouseX, MouseY;

public:
    Camera();
    void MoveCamera();
    int showCameraX();
    int showCameraY();

};

