class MotionPath
{
	// private section
	public:
	protected:
		int id,path_x_coordinate,path_y_coordinate;
		char type[10];
		
		void specify_path(path_x_coordinate,path_y_coordinate);
		void change_path(path_x_coordinate,path_y_coordinate);
};
