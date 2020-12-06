import React from "react"
import { TouchableOpacity, StyleSheet, Text } from "react-native"

export default function StyledButton ({ backgroundColor, title, onPress }) {
    return (
        <TouchableOpacity
        style={[styles.button, { backgroundColor }]}
        onPress={onPress}
        >
            <Text style={styles.title}> {title} </Text>
        </TouchableOpacity>
    )
}

const styles = StyleSheet.create({
    button: {
        width: 70,
        height: 50,
        margin: 10,
        borderRadius: 10,
        alignItems: "center",
        justifyContent: "center",
    },
    title: {
        textAlign: "center",
    },
})