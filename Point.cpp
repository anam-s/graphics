class Point
{
	// private section

	public:
		int x_coordinate,y_coordinate,x_end,y_end,width;
		
	protected:
		int id;
		char color[10];
		void draw(x_coordinate,y_coordinate,width);
		void edit(x_coordinate,y_coordinate,width);
		void delete(x_coordinate,y_coordinate,width);
};

