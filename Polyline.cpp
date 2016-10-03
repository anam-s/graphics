class Polyline:public Point
};
{
	// private section
	public:
		int x_cor,y_cor;
		char type; 
		
	protected:
		int id;
		char color[10];
		void draw(x_coordinate,y_coordinate,width);
		void edit(x_coordinate,y_coordinate,width);
		void delete(x_coordinate,y_coordinate,width);

};
