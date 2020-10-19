while true;
do
	cp infclassR.log "logs/infclassr-$(date +"%d-%m-%y-%r").log"
	./infcR_server -f infclassR.cfg &> /dev/null
	sleep 3
done
