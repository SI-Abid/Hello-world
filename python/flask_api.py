from flask import Flask, jsonify, request
import json

app = Flask(__name__)

@app.route('/')
def index():
    return "Hello, World!"

@app.route('/result/<int:num>', methods=['GET'])
def result(num):
    return jsonify({'result': num})