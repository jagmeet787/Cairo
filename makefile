all:
#pdf:
	g++ crpdf.cc lccairopainter.cpp -lcairo -o pdfo -std=c++11
#svg:
	g++ crsvg.cc lccairopainter.cpp -lcairo -o svgo -std=c++11
#ps:
	g++ crps.cc lccairopainter.cpp -lcairo -o pso -std=c++11
