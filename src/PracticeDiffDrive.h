#ifndef SRC_PRACTICEDIFFDRIVE_H_
#define SRC_PRACTICEDIFFDRIVE_H_

#include <WPILib.h>
#include <ctre/Phoenix.h>
#include <Definitions.h>

class PracticeDiffDrive
{
public:
	PracticeDiffDrive(int rightDriveOne, int rightDriveTwo, int rightDriveThree, int leftDriveOne, int leftDriveTwo, int leftDriveThree);
	virtual ~PracticeDiffDrive() = default;
	void Init();
	void SetDriveType(int type);
	void Update(Joystick &stick1, Joystick &stick2, Joystick &stick3, Joystick &stick4);
	void DriveForward(float left, float right);
	void ArcTurn(float radius, float angle, bool direction);
	float GetPositionFront();
	float GetPositionBack();

private:
	WPI_TalonSRX a_RightDriveOne;
	WPI_TalonSRX a_RightDriveTwo;
	WPI_TalonSRX a_RightDriveThree;

	WPI_TalonSRX a_LeftDriveOne;
	WPI_TalonSRX a_LeftDriveTwo;
	WPI_TalonSRX a_LeftDriveThree;

	DifferentialDrive a_DriveBase;

};

#endif
