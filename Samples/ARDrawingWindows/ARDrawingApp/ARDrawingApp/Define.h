#pragma once

enum State
{
	IDLE,

	CAPTURE_IMAGE,
	DRAWING,
	LEARNING,
	START_TRACKING,
	TRACKING,
	STOP_TRACKING,
	ADD_DRAWING,

	EXIT
};