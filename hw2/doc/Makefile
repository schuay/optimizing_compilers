PROJECT = constprop

all: ${PROJECT}

${PROJECT}:
	pdflatex $(PROJECT)
	pdflatex $(PROJECT)

clean:
	rm -f *.aux $(PROJECT).bbl $(PROJECT).blg $(PROJECT).log \
		$(PROJECT).dvi $(PROJECT).toc $(PROJECT).pdf \
		$(PROJECT).ps $(PROJECT).out \
		img/*-eps-converted-to.pdf

.PHONY: all clean
