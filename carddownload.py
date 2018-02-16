import urllib.request
from urllib.parse import quote
import json

def getCards(set, f):
	url = 'https://omgvamp-hearthstone-v1.p.mashape.com/cards/sets/' + urllib.parse.quote(set)
	print(url)
	request = urllib.request.Request(url)
	request.add_header('X-Mashape-Key', 'KOgahPjaNPmshcmiPjirxgRGIm5Op1l2TcYjsnmhINKZNTXskh')
	data = urllib.request.urlopen(request).read()
	json_data = json.loads(data)
	print(json_data)
	for card in json_data:
		f.write(card['cardSet'] + ',')
		f.write(card['playerClass'] + ',')
		if 'rarity' in card:
			f.write(card['rarity'] + ',')
		else:
			f.write('Basic,')
		f.write(card['name'] + ',')
		if 'cost' in card:
			f.write(str(card['cost']) + '\n')
		else:
			f.write('0\n')

f = open('cards.txt', 'w')
getCards("Journey to Un'Goro", f)
getCards('Knights of the Frozen Throne', f)
getCards('Kobolds & Catacombs', f)
getCards('Classic', f)
f.close()